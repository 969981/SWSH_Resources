/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00915370; name: FUN_00915370
 */


undefined8 FUN_00915370(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [64];
  uint local_34;
  
  param_2 = param_2 & 0xffff;
  if ((param_2 == 0xffff) || (param_3 = param_3 & 0xffff, param_3 == 0xffff)) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1[1];
    param_1[1] = param_2;
    uVar2 = param_2;
    while( true ) {
      if ((param_3 <= uVar2) && (uVar2 != *param_1)) {
        uVar4 = 0;
        goto LAB_0091542c;
      }
      local_34 = 0xffffffff;
      sVar3 = FUN_00915470(param_1,auStack_80,0x10,&local_34);
      if (((ushort)(sVar3 - 0x83U) < 0x3b) && ((param_2 <= local_34 && (local_34 < param_3))))
      break;
      uVar2 = param_1[1];
    }
    uVar4 = 1;
LAB_0091542c:
    param_1[1] = uVar1;
  }
  return uVar4;
}


