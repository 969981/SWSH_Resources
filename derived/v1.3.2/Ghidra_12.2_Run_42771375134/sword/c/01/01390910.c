/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01390910; name: FUN_01390910
 */


void FUN_01390910(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_18 [4];
  int local_14;
  
  lVar1 = FUN_01392ce0(*(undefined8 *)(param_1 + 0x468),auStack_38);
  fVar3 = *(float *)(lVar1 + 0x114);
  lVar1 = FUN_01392f90(*(undefined8 *)(param_1 + 0x468),auStack_18);
  fVar4 = *(float *)(lVar1 + 0x94);
  FUN_013879c0(*(undefined8 *)(param_1 + 0x470),auStack_40);
  fVar2 = (float)FUN_013899a0();
  local_14 = (int)((fVar3 + fVar4 + fVar2) / 3.0);
  (**(code **)(param_1 + 0x480))(param_1 + 0x4a0,&local_14);
  FUN_012dc480(param_1,0);
  return;
}


