/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4a10; name: FUN_009a4a10
 */


void FUN_009a4a10(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_80 [2];
  undefined2 local_7e;
  undefined1 auStack_58 [8];
  
  uVar2 = FUN_009425f0();
  uVar1 = FUN_009141c0();
  if ((uVar1 & 0xff) != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_00914330(uVar2,uVar4);
      local_80[0] = 0x1f;
      local_7e = 0;
      FUN_00943e60((ulong)local_80 | 4);
      local_80[0] = FUN_008e0a00(uVar3);
      local_7e = FUN_008e12a0(uVar3,0xf);
      FUN_00942450(param_1);
      uVar3 = FUN_00925760();
      FUN_00941bd0(uVar3,auStack_58,local_80);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < (uVar1 & 0xff));
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00939da0(uVar2,param_2);
  return;
}


