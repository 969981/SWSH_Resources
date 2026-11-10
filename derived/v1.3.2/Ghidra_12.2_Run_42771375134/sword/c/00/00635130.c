/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00635130; name: FUN_00635130
 */


void FUN_00635130(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_005cbff0();
  uVar3 = (**(code **)(*plVar2 + 0x30))();
  *param_1 = (long)(PTR_DAT_027145d0 + 0x10);
  FUN_005bf710(param_1 + 1,uVar3);
  FUN_006964c0(param_1 + 3,0);
  FUN_00634120(param_1 + 9,uVar3,1);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  puVar1 = PTR_DAT_027145f8;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2f] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  plVar2 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar2 + 0x30))();
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = lVar4;
  param_1[0x32] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[0x31] = lVar4;
  }
  plVar2 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar2 + 0x30))();
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = lVar4;
  param_1[0x38] = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    param_1[0x37] = lVar4;
  }
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return;
}


