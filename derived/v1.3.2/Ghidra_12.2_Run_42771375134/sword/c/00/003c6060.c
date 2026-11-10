/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6060; name: FUN_003c6060
 */


void FUN_003c6060(long param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  
  memcpy(*(void **)(param_1 + 0x20),param_2,(ulong)*(uint *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x80);
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x48) + 0x760);
                    /* WARNING: Could not recover jumptable at 0x003c60ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x30),param_1);
  return;
}


