/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0097d550; name: FUN_0097d550
 */


undefined8 FUN_0097d550(undefined8 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  iVar1 = FUN_0093eec0();
  if ((iVar1 == 0) && (iVar1 = FUN_0093ed20(param_1), iVar1 == 0)) {
    uVar2 = FUN_0093ec60(param_1,param_3);
    local_28 = uVar2;
    uVar3 = FUN_00940330(param_1,&local_28);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    uVar3 = FUN_008e1810(uVar2,8);
    if ((((uVar3 & 1) == 0) && (uVar3 = FUN_008e1810(uVar2,0x16), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_0093ef00(param_1,7), (uVar3 & 1) == 0)) {
      return 1;
    }
  }
  *param_2 = 0x27;
  return 0;
}


