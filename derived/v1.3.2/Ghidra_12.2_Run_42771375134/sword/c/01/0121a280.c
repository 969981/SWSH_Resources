/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121a280; name: FUN_0121a280
 */


void FUN_0121a280(long param_1,long *param_2)

{
  long lVar1;
  undefined1 local_d0 [4];
  char local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined5 local_94;
  undefined3 uStack_8f;
  undefined5 uStack_8c;
  
  if ((*param_2 != 0) && (0x8f < (ulong)param_2[1])) {
    FUN_01223900(local_d0,*param_2 + 0x59,0x37);
    if (*(char *)(param_1 + 0xd0) == '\0') {
      memcpy((void *)(param_1 + 0xe0),local_d0,0xb0);
      *(undefined1 *)(param_1 + 0xd0) = 1;
      lVar1 = *param_2;
    }
    else {
      memcpy((void *)(param_1 + 0xe0),local_d0,0xa1);
      lVar1 = *param_2;
    }
    if ((lVar1 != 0) && (0xb4 < (ulong)param_2[1])) {
      FUN_0121b9b0(local_d0,lVar1 + 0x90,0x25);
      if (*(char *)(param_1 + 0x74) == '\0') {
        *(undefined1 *)(param_1 + 0x78) = local_d0[0];
        *(undefined1 *)(param_1 + 0x7c) = 0;
        if (local_cc != '\0') {
          *(undefined8 *)(param_1 + 0x80) = local_c8;
          *(undefined4 *)(param_1 + 0x98) = local_b0;
          *(undefined8 *)(param_1 + 0x88) = uStack_c0;
          *(undefined8 *)(param_1 + 0x90) = local_b8;
          *(undefined1 *)(param_1 + 0x7c) = 1;
        }
        *(undefined8 *)(param_1 + 0x9c) = local_ac;
        *(undefined8 *)(param_1 + 0xa4) = local_a4;
        *(ulong *)(param_1 + 0xb9) = CONCAT53(uStack_8c,uStack_8f);
        *(ulong *)(param_1 + 0xb4) = CONCAT35(uStack_8f,local_94);
        *(undefined8 *)(param_1 + 0xac) = local_9c;
        *(undefined1 *)(param_1 + 0x74) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x78) = local_d0[0];
        if (*(char *)(param_1 + 0x7c) == '\0') {
          if (local_cc != '\0') {
            *(undefined8 *)(param_1 + 0x80) = local_c8;
            *(undefined4 *)(param_1 + 0x98) = local_b0;
            *(undefined8 *)(param_1 + 0x88) = uStack_c0;
            *(undefined8 *)(param_1 + 0x90) = local_b8;
            *(undefined1 *)(param_1 + 0x7c) = 1;
          }
        }
        else if (local_cc == '\0') {
          *(undefined1 *)(param_1 + 0x7c) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x98) = (undefined1)local_b0;
          *(undefined8 *)(param_1 + 0x80) = local_c8;
          *(undefined8 *)(param_1 + 0x88) = uStack_c0;
          *(undefined8 *)(param_1 + 0x90) = local_b8;
        }
        *(undefined8 *)(param_1 + 0x9c) = local_ac;
        *(ulong *)(param_1 + 0xb9) = CONCAT53(uStack_8c,uStack_8f);
        *(ulong *)(param_1 + 0xb4) = CONCAT35(uStack_8f,local_94);
        *(undefined8 *)(param_1 + 0xac) = local_9c;
        *(undefined8 *)(param_1 + 0xa4) = local_a4;
      }
      if (local_cc != '\0') {
        local_cc = '\0';
      }
    }
  }
  FUN_0121a440(param_1,param_2);
  return;
}


