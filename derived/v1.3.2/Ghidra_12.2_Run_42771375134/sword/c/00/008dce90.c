/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dce90; name: FUN_008dce90
 */


long FUN_008dce90(long param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined8 param_7,undefined4 param_8,undefined2 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x1610);
  if (lVar2 != 0) {
    uVar1 = FUN_008db990(lVar2);
    *(undefined8 *)(param_1 + 0x1610) = uVar1;
    FUN_008db970(lVar2);
    uVar3 = 0x1f;
    if (((param_2 & 0xff) < 6) && ((1 << (ulong)(param_2 & 0x1f) & 0x31U) != 0)) {
      uVar3 = param_6;
    }
    FUN_008db7d0(lVar2);
    FUN_008dbaa0(lVar2,~param_4 * 0x1000000 + 0xa000000 | param_5);
    FUN_008dba90(lVar2,param_2);
    FUN_008dbb40(lVar2,param_7,param_8);
    FUN_008dbac0(lVar2,param_6);
    FUN_008dbab0(lVar2,param_3);
    FUN_008dbad0(lVar2,uVar3);
    FUN_008db9c0(lVar2,param_9);
    FUN_008dbae0(lVar2,1);
    FUN_008dcd50(param_1,lVar2);
  }
  return lVar2;
}


