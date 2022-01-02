//Deseja aplicar esta alteração? (update ou delete)
import * as React from 'react';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Typography from '@mui/material/Typography';
import Modal from '@mui/material/Modal';
import Axios from 'axios';
import { IconButton } from '@mui/material';

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
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);
  const [delChek, setDelCheck] = React.useState(false);
  const deleteEmpresa = (empresa) => {
    Axios.delete(`http://localhost:3001/companies/delete/:${empresa}`);
  }

  return (
    <div>
      <IconButton onClick={handleOpen}/>
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
          <Button variant='contained' onClick={setDelCheck(true)}
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
