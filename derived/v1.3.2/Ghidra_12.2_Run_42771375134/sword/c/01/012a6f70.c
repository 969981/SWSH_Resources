/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a6f70; name: FUN_012a6f70
 */


void FUN_012a6f70(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_027272d0;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar5;
  param_1[9] = (long)(puVar2 + 0x48);
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = plVar5;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    param_1[0xc] = (long)puVar4;
    param_1[0xd] = (long)plVar5;
    param_1[0xe] = 0x30;
    param_1[0xf] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    plVar5 = (long *)param_1[1];
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x30,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = plVar5;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      param_1[0x10] = (long)puVar4;
      param_1[0x11] = (long)plVar5;
      param_1[0x12] = 0x30;
      param_1[0x13] = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      nn::os::InitializeMutex((MutexType *)(param_1 + 0x14),false,0);
      param_1[0x19] = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = param_1[1];
      param_1[0x1d] = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      FUN_00fb85f0(param_1[0xc],param_1[0xb]);
      FUN_00fb85f0(param_1[0x10],param_1[0xb]);
      FUN_010a0810(param_1 + 0x19,param_1[0xb]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


