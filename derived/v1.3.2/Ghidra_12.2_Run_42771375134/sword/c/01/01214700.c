/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01214700; name: FUN_01214700
 */


void FUN_01214700(char *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  
  if ((*param_2 != 0) && (0x9f < (ulong)param_2[1])) {
    FUN_0121c400(&local_58,*param_2 + 0x84,0x1c);
    if (param_1[0x34] == '\0') {
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x48) = local_48;
      *(undefined8 *)(param_1 + 0x38) = local_58;
      *(ulong *)(param_1 + 0x60) = CONCAT26(uStack_2a,local_30);
      *(ulong *)(param_1 + 0x68) = CONCAT26(uStack_22,uStack_28);
      *(undefined8 *)(param_1 + 0x50) = local_40;
      *(undefined8 *)(param_1 + 0x58) = uStack_38;
      param_1[0x34] = '\x01';
      lVar2 = *param_2;
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x48) = local_48;
      *(undefined8 *)(param_1 + 0x38) = local_58;
      *(ulong *)(param_1 + 0x66) = CONCAT62(uStack_28,uStack_2a);
      *(undefined8 *)(param_1 + 0x50) = local_40;
      *(undefined8 *)(param_1 + 0x58) = uStack_38;
      *(ulong *)(param_1 + 0x60) = CONCAT26(uStack_2a,local_30);
      lVar2 = *param_2;
    }
    if ((lVar2 != 0) && (0xbf < (ulong)param_2[1])) {
      FUN_011f5000(&local_58,lVar2 + 0xa0,0x20);
      *(undefined8 *)(param_1 + 0x22) = local_48;
      *(undefined8 *)(param_1 + 0x2a) = local_40;
      *(undefined8 *)(param_1 + 0x1a) = uStack_50;
      *(undefined8 *)(param_1 + 0x12) = local_58;
      if (param_1[0x10] == '\0') {
        param_1[0x10] = '\x01';
      }
      if ((*param_2 != 0) && (199 < (ulong)param_2[1])) {
        local_58 = 8;
        uVar1 = FUN_0121ac30(*param_2 + 0xc0,&local_58);
        if (*param_1 == '\0') {
          *(undefined8 *)(param_1 + 8) = uVar1;
          *param_1 = '\x01';
          return;
        }
        *(undefined8 *)(param_1 + 8) = uVar1;
        return;
      }
    }
  }
  return;
}


