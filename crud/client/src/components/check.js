//Deseja aplicar esta alteração? (update ou delete)
import React, {useContext} from 'react';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Typography from '@mui/material/Typography';
import Modal from '@mui/material/Modal';
import { IconButton } from '@mui/material';
import DeleteIcon from '@mui/icons-material/Delete';
import { CheckContext } from '../context/checkContext';

const style = {
  position: 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50%, -50%)',
  width: 400,
  bgcolor: 'background.paper',
  border: '2px solid #000',
  boxShadow: 24,
  p: 4,
};

export default function Check() {
  const [open, setOpen] = React.useState(false);
  const [del, setDel] = useContext(CheckContext)
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);
  const handleDel = () => setDel(true);

  return (
    <div>
      <IconButton onClick={handleOpen}>
      <DeleteIcon color='error'/>
      </IconButton>
      <Modal
        open={open}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
      >
        <Box sx={style}>
          <Typography id="modal-modal-title" variant="h6" component="h2">
            Deletar empresa
          </Typography>
          <Typography id="modal-modal-description" sx={{ mt: 2 }}>
            Essa operação é irreversível, tem certeza?
          </Typography>
          <Button variant='contained' onClick={handleDel}
          sx={{
            marginRight: 1,
            marginTop: 2
            }}
            >
            Sim, desejo deletar.
          </Button>
          <Button variant='contained' color='error' onClick={handleClose}
          sx={{
            marginLeft: 1,
            marginTop: 2
          }}
          >
            Não desejo deletar.
          </Button>
        </Box>
      </Modal>
    </div>
  );
}
