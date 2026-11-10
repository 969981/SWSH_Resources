/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199c60; name: FUN_01199c60
 */


uint FUN_01199c60(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *local_50;
  undefined1 auStack_48 [8];
  
  uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x80);
    puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_011ad660(puVar3);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_50 = puVar3;
    FUN_0075efb0(auStack_48,plVar5,0,1);
    *(byte *)(local_50 + 4) = param_3 & 1;
    FUN_0075f0a0(auStack_48);
    local_50 = puVar3;
    FUN_0075efb0(auStack_48,plVar5,0,1);
    local_50[3] = *(undefined8 *)(param_1 + 0xa8);
    FUN_0075f0a0(auStack_48);
    uVar1 = FUN_01199de0(*(undefined8 *)(param_1 + 0x88),puVar3,(param_2 & 0xff) + 1000);
    FUN_0075efb0(&local_50,plVar5,0,1);
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x28,8);
    FUN_0075f0a0(&local_50);
  }
  return uVar1 & 1;
}


