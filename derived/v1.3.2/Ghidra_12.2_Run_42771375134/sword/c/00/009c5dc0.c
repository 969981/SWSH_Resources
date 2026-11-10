/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c5dc0; name: FUN_009c5dc0
 */


void FUN_009c5dc0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *local_58;
  long lStack_50;
  long local_48;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02718868;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0xa70);
  param_1[0xb] = param_2[1];
  param_1[0xc] = param_2[2];
  param_1[0xd] = param_2[3];
  *(int *)(param_1 + 0xe) = (int)param_2[4];
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_2 + 0x24);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_2 = (long *)*param_2;
  lStack_50 = param_1[0xb];
  local_48 = param_1[0xd];
  local_58 = param_2;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_008d5cd0(lVar2,&local_58);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = param_1[0xf];
  param_1[0xf] = lVar2;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    if (lVar2 != 0) {
      FUN_008d61f0(lVar2);
      (**(code **)(**(long **)(lVar3 + 0x30) + 0x18))
                (*(long **)(lVar3 + 0x30),lVar2,*(undefined8 *)(lVar3 + 0x38),
                 *(undefined8 *)(lVar3 + 0x40));
    }
    puVar4 = *(undefined8 **)(lVar3 + 8);
    *(undefined8 *)(lVar3 + 8) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                (*(long **)(lVar3 + 0x10),puVar4,*(undefined8 *)(lVar3 + 0x18),
                 *(undefined8 *)(lVar3 + 0x20));
    }
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],lVar3,param_1[0x11],param_1[0x12]);
  }
  param_1[0x10] = (long)param_2;
  param_1[0x11] = 0x48;
  param_1[0x12] = 8;
  return;
}


