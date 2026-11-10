/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e04a0; name: FUN_005e04a0
 */


void FUN_005e04a0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_005dc7e0();
  puVar2 = PTR_DAT_02714278;
  puVar1 = PTR_DAT_02714278 + 0xb0;
  *param_1 = (long)(PTR_DAT_02714278 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)(puVar2 + 0xe8);
  param_1[3] = (long)(puVar2 + 0x118);
  puVar1 = PTR_DAT_02714280;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x17] = param_3;
  param_1[0x18] = (long)(puVar1 + 0x10);
  param_1[0x1b] = 0;
  param_1[0x1c] = 8;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x19] = lVar3;
  }
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x23] = param_2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 8;
  param_1[0x27] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x23] = lVar3;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  param_1[4] = (long)param_1;
  param_1[5] = *(long *)PTR_DAT_02714098;
                    /* WARNING: Could not recover jumptable at 0x005e057c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x17] + 0x10))();
  return;
}


