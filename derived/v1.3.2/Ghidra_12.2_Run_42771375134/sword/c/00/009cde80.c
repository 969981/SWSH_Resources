/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cde80; name: FUN_009cde80
 */


uint FUN_009cde80(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *local_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar1 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x18);
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_009d4c90(puVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    local_50 = puVar2;
    FUN_0075efb0(auStack_48,plVar4,0,1);
    *(int *)((long)local_50 + 0x14) = param_2 + 1;
    FUN_0075f0a0(auStack_48);
    local_50 = puVar2;
    FUN_0075efb0(auStack_48,plVar4,0,1);
    *(undefined4 *)(local_50 + 3) = param_3;
    FUN_0075f0a0(auStack_48);
    uVar1 = FUN_009cdff0(*(undefined8 *)(param_1 + 0xd8),puVar2);
    FUN_0075efb0(&local_50,plVar4,0,1);
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar2,0x20,8);
    FUN_0075f0a0(&local_50);
  }
  return uVar1 & 1;
}


