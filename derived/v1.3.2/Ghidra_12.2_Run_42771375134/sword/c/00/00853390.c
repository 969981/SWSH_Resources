/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853390; name: FUN_00853390
 */


void FUN_00853390(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_02716d10;
  pbVar2 = *(byte **)PTR_DAT_02716d10;
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
    pbVar2 = *(byte **)puVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pbVar3 != pbVar2 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar3 + 0x10));
    }
    operator_delete(pbVar3);
  }
  puVar1 = PTR_DAT_02716e70;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(long *)puVar1 == param_1) || (*(long **)(param_1 + 0x30) == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0085346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  return;
}


