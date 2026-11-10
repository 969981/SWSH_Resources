/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119b420; name: FUN_0119b420
 */


uint FUN_0119b420(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x80);
    puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x20,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_011b0500(puVar3);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_40 = puVar3;
    FUN_0075efb0(auStack_38,plVar5,0,1);
    *(uint *)((long)local_40 + 0x14) = (uint)*(byte *)(param_1 + 0x149);
    FUN_0075f0a0(auStack_38);
    uVar1 = FUN_0119b570(*(undefined8 *)(param_1 + 0x88),puVar3,*(byte *)(param_1 + 0x149) + 2000);
    FUN_0075efb0(&local_40,plVar5,0,1);
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x20,8);
    FUN_0075f0a0(&local_40);
  }
  return uVar1 & 1;
}


