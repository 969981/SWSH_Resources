/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098aeb0; name: FUN_0098aeb0
 */


void FUN_0098aeb0(undefined8 param_1,uint param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined2 local_68;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if (uVar1 == (param_2 & 0xff)) {
    iVar2 = FUN_0093ec30(param_1,0);
    if (iVar2 != 0) {
      FUN_0093ec40(param_1,0,0);
      iVar2 = FUN_0093eb90(param_1,0x1a);
      if ((iVar2 == 0) || (iVar3 = FUN_0093ec30(param_1,1), iVar3 != iVar2)) {
        local_68 = 0x1f;
        uVar4 = (ulong)&local_68 | 4;
        FUN_00943e60(uVar4);
        local_68 = CONCAT11(1,param_3);
        FUN_00943f20(uVar4,2,param_4);
        FUN_00943f60(uVar4,uVar1);
        FUN_00944010(uVar4);
        FUN_0093f640(param_1,&local_68);
        FUN_0093ec40(param_1,1,iVar2);
      }
    }
  }
  return;
}


