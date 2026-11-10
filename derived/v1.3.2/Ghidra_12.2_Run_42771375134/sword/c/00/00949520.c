/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949520; name: FUN_00949520
 */


void FUN_00949520(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_008e0a00(*param_3);
  uVar2 = FUN_00942580(param_1,uVar1);
  if ((uVar2 & 0xff) != 5 && *(char *)((long)param_3 + 10) != '\0') {
    uVar3 = FUN_009423b0(param_1);
    FUN_00937270(uVar3,uVar2,0x33);
  }
  uVar3 = FUN_009423b0(param_1);
  FUN_00937a20(uVar3,*param_3,*(undefined2 *)(param_3 + 1),0,0x1f,
               *(undefined1 *)((long)param_3 + 10));
  return;
}


