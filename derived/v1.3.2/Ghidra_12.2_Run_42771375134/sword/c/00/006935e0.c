/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006935e0; name: FUN_006935e0
 */


undefined8 FUN_006935e0(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  pcVar2 = *(code **)(param_1 + 0x48);
  if (pcVar2 == (code *)0x0) {
    return 0xfffffffe;
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar1 + 0x40));
    pcVar2 = *(code **)(param_1 + 0x48);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  (*pcVar2)(*(undefined8 *)(param_1 + 0x50),lVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


