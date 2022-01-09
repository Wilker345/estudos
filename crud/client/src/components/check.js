//Deseja aplicar esta alteração? (update ou delete)
import React from 'react';
import {Box, Button, Typography, Modal} from '@mui/material'
import { IconButton } from '@mui/material';
import DeleteIcon from '@mui/icons-material/Delete';
import Axios from 'axios';

const style = {
  position: 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50%, -50%)',
  width: 400,
  bgcolor: 'background.paper',
  p: 4,
  borderRadius: 4
};

export default function Check({cnpj}) {
  const [open, setOpen] = React.useState(false);
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);
  const empresa = cnpj;

  async function handleDel(parametro){
    await Axios.delete(`http://localhost:3001/companies/delete/:${parametro}`);
  }

  return (
    <div>
      <IconButton onClick={handleOpen}>
      <DeleteIcon/>
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
          <Button variant='contained' onClick={() => handleDel(empresa) && handleClose()}
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
