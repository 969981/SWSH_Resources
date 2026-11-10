/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ca40; name: FUN_0075ca40
 */


void FUN_0075ca40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_48 [8];
  
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0075efb0(auStack_48,param_3,0,1);
  plVar5 = (long *)*param_1;
  puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  uVar4 = FUN_01766940(PTR_LAB_02715f28,param_1);
  puVar2[2] = uVar4;
  *puVar2 = uVar4;
  puVar2[1] = uVar4;
  *(undefined4 *)(puVar2 + 3) = 0xfffffffe;
  FUN_0175f270(uVar4,0xfff0b9d8);
  uVar1 = FUN_0175dbf0(uVar4,0xfff0b9d8);
  *(undefined4 *)(puVar2 + 3) = uVar1;
  puVar2[4] = uVar4;
  *(undefined4 *)(puVar2 + 5) = 0xfffffffe;
  FUN_01760c90(uVar4,0xfff0b9d8,2);
  uVar1 = FUN_0175dbf0(puVar2[4],0xfff0b9d8);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  FUN_0075da40(*puVar2,PTR_LAB_02715f30,PTR_LAB_02715f38,PTR_LAB_02715f40);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar6 = (long *)param_1[2];
  param_1[2] = puVar2;
  if (plVar6 != (long *)0x0) {
    if ((plVar6[4] != 0) && ((int)plVar6[5] != -2)) {
      FUN_0175dcd0(plVar6[4],0xfff0b9d8);
    }
    if ((plVar6[2] != 0) && ((int)plVar6[3] != -2)) {
      FUN_0175dcd0(plVar6[2],0xfff0b9d8);
    }
    lVar3 = *plVar6;
    *plVar6 = 0;
    if (lVar3 != 0) {
      FUN_01766c70();
    }
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,param_1[4],param_1[5]);
  }
  param_1[3] = plVar5;
  param_1[4] = 0x30;
  param_1[5] = 8;
  FUN_0075f0a0(auStack_48);
  return;
}


