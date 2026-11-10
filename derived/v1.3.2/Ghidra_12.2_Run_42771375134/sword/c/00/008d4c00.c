/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4c00; name: FUN_008d4c00
 */


void FUN_008d4c00(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong local_90;
  undefined *local_88;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  
  if (*(long *)PTR_DAT_02717bd8 == 0) {
    puVar5 = (undefined8 *)(PTR_DAT_02717bd8 + 8);
    *(long **)PTR_DAT_02717bd8 = param_1;
    puVar1 = PTR_PTR_02710928;
    lVar6 = 0;
    do {
      local_88 = (undefined *)0x0;
      *puVar5 = 0;
      puVar5[1] = 0;
      if (((uint)lVar6 & 0x7fffffff) < 0xd) {
        local_88 = (&PTR_s_bin_battle_ai_script_btl_ai_basi_026197e0)[(lVar6 << 0x21) >> 0x21];
      }
      FUN_008d4da0(local_80,&local_88);
      plVar4 = local_80 + 2;
      if (local_68 != 0) {
        plVar4 = (long *)puVar1;
        if (local_80[0] != 0) {
          plVar4 = (long *)(local_80[0] + 0x60);
        }
      }
      iVar2 = nn::fs::OpenFile((FileHandle *)&local_88,(char *)*plVar4,1);
      if (iVar2 == 0) {
        local_90 = 0;
        nn::fs::GetFileSize(&local_90,local_88);
        nn::fs::CloseFile(local_88);
        if (0 < (long)local_90) {
          pvVar3 = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_90,8);
          *puVar5 = pvVar3;
          puVar5[1] = local_90;
          plVar4 = local_80 + 2;
          if (local_68 != 0) {
            plVar4 = (long *)puVar1;
            if (local_80[0] != 0) {
              plVar4 = (long *)(local_80[0] + 0x60);
            }
          }
          nn::fs::EnableIndividualFileDataCache((char *)*plVar4,pvVar3,local_90);
        }
      }
      if ((local_68 != 0) && (local_80[0] != 0)) {
        (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
      }
      local_80[0] = 0;
      local_80[1] = 0xcbf29ce484222645;
      local_70 = &DAT_01d38550;
      local_68 = 0;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (lVar6 != 0xd);
  }
  return;
}


