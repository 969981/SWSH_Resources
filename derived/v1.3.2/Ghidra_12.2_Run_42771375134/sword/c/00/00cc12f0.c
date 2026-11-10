/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc12f0; name: FUN_00cc12f0
 */


void FUN_00cc12f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  local_24 = 0;
  uVar2 = FUN_0077d470(param_2);
  uVar1 = FUN_0077d480(param_2);
  FUN_0077dea0(&local_24,4,uVar2,uVar1);
  *(undefined1 *)(param_1 + 3) = local_24._2_1_;
  *(undefined2 *)(param_1 + 1) = (undefined2)local_24;
  return;
}


