/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01169860; name: FUN_01169860
 */


undefined8 FUN_01169860(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_6c [28];
  long local_48;
  
  uVar4 = FUN_01164670(*(undefined8 *)(param_1 + 0x98));
  uVar5 = 4;
  if ((uVar4 & 1) == 0) {
    uVar5 = 2;
  }
  uVar7 = *(undefined8 *)PTR_DAT_02718f20;
  uVar6 = 0;
  while ((FUN_011ffb90(&local_48,uVar7,uVar6), local_48 != 0 && (*(long *)(local_48 + 8) != 0))) {
    FUN_01524ba0(*(long *)(local_48 + 8),auStack_6c);
    uVar1 = FUN_01524de0(*(undefined8 *)(local_48 + 8));
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    uVar2 = FUN_01524bf0(*(undefined8 *)(local_48 + 8));
    uVar3 = FUN_01524c00(*(undefined8 *)(local_48 + 8));
    FUN_01164a30(uVar8,uVar6,auStack_6c,uVar1,uVar2,uVar3);
    uVar6 = uVar6 + 1;
    if (uVar5 <= (uVar6 & 0xff)) {
      return 1;
    }
  }
  return 0;
}


