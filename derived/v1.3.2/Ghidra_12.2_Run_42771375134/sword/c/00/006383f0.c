/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006383f0; name: FUN_006383f0
 */


undefined8 FUN_006383f0(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  (**(code **)PTR_DAT_027143f8)(&local_b0);
  (**(code **)PTR_DAT_02714400)(&local_b0,uVar4);
  (**(code **)PTR_DAT_02714670)(&local_b0,*(undefined4 *)(param_2 + 4));
  (**(code **)PTR_DAT_02714678)(&local_b0,1);
  (**(code **)PTR_DAT_02714680)(&local_b0,1);
  (**(code **)PTR_DAT_02714688)(&local_b0,1);
  (**(code **)PTR_DAT_02714418)(&local_b0,3);
  (**(code **)PTR_DAT_02714410)(&local_b0,10);
  (**(code **)PTR_DAT_02714408)(&local_b0,4);
  (**(code **)PTR_DAT_02714690)(&local_b0,1);
  uVar5 = (**(code **)(**(long **)(param_1 + 0x108) + 0x80))();
  (**(code **)PTR_DAT_02714438)(&local_b0,uVar5,*(undefined8 *)(param_1 + 0x118));
  lVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                    (*(long **)(param_1 + 0x10),0xc0,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Buffer_Impl.cpp"
                     ,0x259);
  *(long *)(param_1 + 0x138) = lVar6;
  if (lVar6 != 0) {
    lVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                      (*(long **)(param_1 + 0x10),0x28,0x10,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Buffer_Impl.cpp"
                       ,0x260);
    *(long *)(param_1 + 0x140) = lVar6;
    if ((lVar6 != 0) &&
       (cVar1 = (**(code **)PTR_DAT_02714440)(*(undefined8 *)(param_1 + 0x138),&local_b0),
       cVar1 == '\x01')) {
      (**(code **)PTR_DAT_02713ad8)(*(undefined8 *)(param_1 + 0x140));
      (**(code **)PTR_DAT_02713ae8)(*(undefined8 *)(param_1 + 0x140),0,1);
      uVar5 = *(undefined8 *)(param_1 + 0x140);
      uVar2 = (**(code **)PTR_DAT_02713af0)(*(undefined8 *)(param_1 + 0x138));
      (**(code **)PTR_DAT_02713af8)(uVar5,uVar2);
      (**(code **)PTR_DAT_02713b28)(*(undefined8 *)(param_1 + 0x140),0,1);
      uVar5 = *(undefined8 *)(param_1 + 0x140);
      uVar2 = (**(code **)PTR_DAT_02713b00)(*(undefined8 *)(param_1 + 0x138));
      (**(code **)PTR_DAT_02713b08)(uVar5,uVar2);
      iVar3 = FUN_005fb2b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x138),
                           *(undefined8 *)(param_1 + 0x140));
      *(int *)(param_1 + 0x130) = iVar3;
      if (iVar3 != -1) {
        uVar4 = (**(code **)PTR_DAT_02714698)(uVar4,iVar3);
        *(undefined8 *)(param_1 + 0x148) = uVar4;
        return 1;
      }
    }
  }
  return 0;
}


