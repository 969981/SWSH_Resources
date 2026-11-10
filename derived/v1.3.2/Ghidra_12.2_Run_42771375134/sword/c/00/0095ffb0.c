/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095ffb0; name: FUN_0095ffb0
 */


void FUN_0095ffb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_009423b0();
  puVar2 = (undefined4 *)param_3[3];
  FUN_009383b0(uVar1,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),
               *(undefined1 *)((long)puVar2 + 0xe),puVar2[4],*puVar2,*(undefined2 *)(param_3 + 4));
  return;
}


