/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e0490; name: FUN_009e0490
 */


void FUN_009e0490(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_02718ac8;
  *(undefined8 *)PTR_DAT_02718ac8 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  puVar1 = PTR_DAT_02718ab8;
  lVar3 = *(long *)PTR_DAT_02718ab8;
  *(undefined8 *)PTR_DAT_02718ab8 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_02718ac0;
  lVar3 = *(long *)PTR_DAT_02718ac0;
  *(undefined8 *)PTR_DAT_02718ac0 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = 0;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009e05c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  return;
}


