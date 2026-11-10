/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a3be0; name: FUN_009a3be0
 */


undefined8 FUN_009a3be0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = FUN_008e58d0(param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_008e50f0(param_2);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00931920(param_1);
    uVar2 = FUN_008e5100(param_2);
    lVar6 = FUN_008deea0(uVar5,uVar2);
    uVar1 = FUN_008e1290();
    iVar3 = FUN_008ec470(uVar1,*(undefined1 *)(lVar6 + 0x33d),0x35);
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 1;
}


