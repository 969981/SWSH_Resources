/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b030; name: FUN_0040b030
 */


undefined8 FUN_0040b030(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_160 [264];
  long local_58;
  
  FUN_00418860(auStack_160,param_1,1);
  if (local_58 == 0) {
    if (param_2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar1 = FUN_004188e0(auStack_160,param_2);
  }
  FUN_004188d0(auStack_160);
  return uVar1;
}


