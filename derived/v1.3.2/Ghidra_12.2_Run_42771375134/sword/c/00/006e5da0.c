/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5da0; name: FUN_006e5da0
 */


undefined4 FUN_006e5da0(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0xc);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = nn::fs::Commit(pcVar3);
  *param_1 = uVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar1;
}


