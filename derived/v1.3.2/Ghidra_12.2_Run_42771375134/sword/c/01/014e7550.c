/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e7550; name: FUN_014e7550
 */


void FUN_014e7550(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + 0x260) = 0;
  puVar5 = (undefined8 *)FUN_0077d470(*(undefined8 *)(param_2 + 8));
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  *(undefined8 *)(param_1 + 0x294) = *(undefined8 *)((long)puVar5 + 0xe);
  *(undefined8 *)(param_1 + 0x28e) = uVar2;
  puVar3 = PTR_DAT_02710798;
  *(undefined8 *)(param_1 + 0x286) = uVar1;
  lVar6 = *(long *)(*(long *)puVar3 + 0x1e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_01524ba0(lVar6,param_1 + 0x29c);
  FUN_00884e90(*(undefined8 *)(param_2 + 0x18),param_1 + 0x2b6);
  uVar4 = FUN_008d4270();
  *(undefined1 *)(param_1 + 0xaca) = uVar4;
  uVar4 = FUN_008d3750();
  *(undefined1 *)(param_1 + 0xacb) = uVar4;
  uVar4 = FUN_01524bf0(lVar6);
  *(undefined1 *)(param_1 + 0xacc) = uVar4;
  uVar4 = FUN_01524de0(lVar6);
  *(undefined1 *)(param_1 + 0xacd) = uVar4;
  *(undefined1 *)(param_1 + 0xace) = 0;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014e7618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


