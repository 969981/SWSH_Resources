/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01024500; name: FUN_01024500
 */


void FUN_01024500(long param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 local_24;
  
  pcVar1 = (char *)(param_1 + 0x4450);
  cVar2 = *pcVar1;
  local_24 = param_2;
  if (cVar2 != '\0') {
    *pcVar1 = '\0';
    FUN_0075bb30(*(undefined8 *)(param_1 + 8));
  }
  FUN_0075b670(*(undefined8 *)(param_1 + 8),&local_24);
  if (*pcVar1 != cVar2) {
    *pcVar1 = cVar2;
    if (cVar2 == '\0') {
      FUN_0075bb30(*(undefined8 *)(param_1 + 8));
      return;
    }
    FUN_0075bac0();
  }
  return;
}


