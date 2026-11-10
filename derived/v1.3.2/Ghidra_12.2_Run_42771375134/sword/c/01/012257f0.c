/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012257f0; name: FUN_012257f0
 */


void FUN_012257f0(char *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*param_2 != 0) && (0xf9 < (ulong)param_2[1])) {
    FUN_011f5000(&local_40,*param_2 + 0xda,0x20);
    *(undefined8 *)(param_1 + 0x2a) = local_30;
    *(undefined8 *)(param_1 + 0x32) = uStack_28;
    *(undefined8 *)(param_1 + 0x22) = uStack_38;
    *(undefined8 *)(param_1 + 0x1a) = local_40;
    if (param_1[0x18] == '\0') {
      param_1[0x18] = '\x01';
    }
    if ((*param_2 != 0) && (0x101 < (ulong)param_2[1])) {
      local_40 = 8;
      uVar1 = FUN_0121ac30(*param_2 + 0xfa,&local_40);
      if (param_1[8] == '\0') {
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        param_1[8] = '\x01';
        lVar2 = *param_2;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        lVar2 = *param_2;
      }
      if ((lVar2 != 0) && (0x109 < (ulong)param_2[1])) {
        local_40 = 8;
        FUN_0121acd0(lVar2 + 0x102,&local_40);
        if (*param_1 == '\0') {
          *param_1 = '\x01';
          return;
        }
      }
    }
  }
  return;
}


