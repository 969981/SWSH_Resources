/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00990d50; name: FUN_00990d50
 */


void FUN_00990d50(undefined8 param_1,undefined1 param_2)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_60;
  uint local_5f;
  undefined1 local_5b;
  undefined1 auStack_58 [40];
  
  lVar2 = FUN_0093ec60();
  sVar1 = FUN_008e1290();
  if (((sVar1 == 0x15f) && (*(char *)(lVar2 + 0x33d) != '\0')) &&
     (uVar3 = FUN_008e1570(lVar2), (uVar3 & 1) == 0)) {
    local_60 = 0x1f;
    local_5b = 1;
    local_5f = 0;
    FUN_00943e60(auStack_58);
    local_5f = local_5f & 0xffffff00;
    local_60 = param_2;
    FUN_00943f20(auStack_58,2,0x130);
    FUN_00943f60(auStack_58,param_2);
    FUN_00940150(param_1,&local_60);
  }
  return;
}


