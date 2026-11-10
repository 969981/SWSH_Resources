/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945320; name: FUN_00945320
 */


void FUN_00945320(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_009423e0();
  uVar3 = FUN_00927910();
  cVar1 = *param_3;
  uVar2 = (undefined1)uVar3;
  if (cVar1 != '\x1f') {
    uVar4 = FUN_009423e0(param_1);
    uVar2 = FUN_00927990(uVar4,cVar1,uVar3);
  }
  *param_2 = uVar2;
  return;
}


