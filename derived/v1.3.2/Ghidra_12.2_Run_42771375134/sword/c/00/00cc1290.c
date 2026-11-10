/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc1290; name: FUN_00cc1290
 */


void FUN_00cc1290(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_28 [8];
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  
  local_14 = *(undefined2 *)(param_1 + 1);
  local_12 = *(undefined1 *)(param_1 + 3);
  local_11 = 0;
  sVar1 = strlen((char *)&local_14);
  FUN_0077dfd0(auStack_28,4,&local_14,sVar1);
  FUN_0077d520(param_2,auStack_28);
  return;
}


