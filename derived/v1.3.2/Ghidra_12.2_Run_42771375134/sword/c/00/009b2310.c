/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2310; name: FUN_009b2310
 */


void FUN_009b2310(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar6 = (long *)*param_3;
    *puVar2 = plVar6;
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      FUN_009bc810(uVar4);
      puVar2[1] = uVar4;
      puVar2[2] = plVar6;
      puVar2[3] = 0x30;
      puVar2[4] = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *param_1 = (long)puVar2;
      param_1[1] = (long)param_2;
      param_1[2] = 0x28;
      param_1[3] = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


