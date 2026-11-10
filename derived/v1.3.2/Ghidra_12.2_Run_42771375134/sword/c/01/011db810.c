/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011db810; name: FUN_011db810
 */


void FUN_011db810(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *local_50;
  undefined1 auStack_48 [8];
  
  plVar3 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x20,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_011de910(puVar1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_50 = puVar1;
  FUN_0075efb0(auStack_48,plVar3,0,1);
  *(undefined4 *)((long)local_50 + 0x14) = param_2;
  FUN_0075f0a0(auStack_48);
  FUN_011dba80(*(undefined8 *)(param_1 + 0x18),puVar1,param_3);
  FUN_0075efb0(&local_50,plVar3,0,1);
  (**(code **)*puVar1)(puVar1);
  (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,0x20,8);
  FUN_0075f0a0(&local_50);
  return;
}


