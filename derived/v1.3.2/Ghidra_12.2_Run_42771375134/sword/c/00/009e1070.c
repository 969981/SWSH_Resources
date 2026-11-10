/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1070; name: FUN_009e1070
 */


void FUN_009e1070(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02718ad8;
  lVar2 = *(long *)(PTR_DAT_02718ad8 + 0x28);
  if (lVar2 != 0) {
    *(undefined8 *)(PTR_DAT_02718ad8 + 0x28) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x30);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x30) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x38);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x38) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x40);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x40) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x48);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x48) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x20);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x20) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x18);
  if (lVar2 != 0) {
    *(undefined8 *)(puVar1 + 0x18) = 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(puVar1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(puVar1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x009e1148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  return;
}


