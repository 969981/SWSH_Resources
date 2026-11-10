/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d2db0; name: FUN_008d2db0
 */


void FUN_008d2db0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [8];
  
  uVar8 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 8);
  lVar6 = FUN_008d35e0(auStack_48,uVar8);
  puVar5 = PTR_DAT_02717468;
  puVar7 = *(undefined8 **)PTR_DAT_02717468;
  *(long *)PTR_DAT_02717468 = lVar6;
  if (puVar7 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar7[1];
    uVar9 = puVar7[4];
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar4,uVar9);
    lVar6 = *(long *)puVar5;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x48;
  }
  FUN_006cef90(lVar1);
  FUN_00887d20(*(undefined8 *)puVar5,uVar8);
  return;
}


