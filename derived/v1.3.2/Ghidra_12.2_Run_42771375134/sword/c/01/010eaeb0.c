/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010eaeb0; name: FUN_010eaeb0
 */


void FUN_010eaeb0(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar5 = *(long **)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x750,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_00ff9400(plVar4,param_1,param_3,uVar6);
  puVar2 = PTR_DAT_02724728;
  puVar1 = PTR_DAT_02724728 + 0x108;
  plVar4[9] = (long)(PTR_DAT_02724728 + 200);
  *(undefined1 *)(plVar4 + 0xbc) = 0;
  plVar4[0xbb] = 0;
  plVar4[0xba] = 0;
  plVar4[10] = (long)puVar1;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0xbd] = (long)(puVar2 + 0x130);
                    /* WARNING: Subroutine does not return */
  memset(plVar4 + 0xbe,0,0x151);
}


