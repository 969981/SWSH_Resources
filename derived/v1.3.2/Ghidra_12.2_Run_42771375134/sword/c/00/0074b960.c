/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074b960; name: FUN_0074b960
 */


undefined8 FUN_0074b960(float param_1)

{
  undefined1 auStack_38 [4];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  FUN_0074ba10(auStack_38);
  if (param_1 < local_34) {
    return 0;
  }
  if (param_1 < local_30) {
    return 1;
  }
  if (param_1 < local_2c) {
    return 2;
  }
  if (param_1 < local_28) {
    return 3;
  }
  return 0xffffffff;
}


