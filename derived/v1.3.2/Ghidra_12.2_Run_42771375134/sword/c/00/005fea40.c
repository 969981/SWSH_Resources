/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fea40; name: FUN_005fea40
 */


void FUN_005fea40(long param_1)

{
  size_t __n;
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  size_t sVar9;
  long *local_4c8;
  char *local_4c0;
  long local_4b8;
  long local_4b0;
  ulong local_4a8;
  ulong local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_48c;
  undefined4 local_484;
  undefined8 local_480;
  undefined4 local_478;
  long *local_470;
  char *local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  ulong local_448;
  char local_440 [1024];
  
  if (*(long *)(*(long *)(param_1 + 0x178) + 0x398) != 0) {
    plVar5 = (long *)FUN_005cbff0();
    lVar6 = (**(code **)(*plVar5 + 0xd8))();
    if (*(char *)(lVar6 + 0x61) != '\0') {
      local_470 = *(long **)(param_1 + 8);
      local_468 = local_440;
      local_450 = 0x400;
      local_448 = 1;
      local_460 = 0;
      uStack_458 = 0;
      if (local_470 == (long *)0x0) {
        lVar6 = FUN_005bc740();
        if (lVar6 == 0) {
          local_470 = (long *)FUN_005bc6f0();
        }
        else {
          local_470 = (long *)FUN_005bc740();
        }
      }
      *local_468 = '\0';
      plVar5 = (long *)FUN_005cbff0();
      lVar6 = (**(code **)(*plVar5 + 0xd8))();
      pcVar8 = *(char **)PTR_PTR_027144c0;
      FUN_005c4670(&local_4c8,lVar6 + 0x30,0);
      if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
        sVar9 = 0;
        do {
          __n = sVar9 + 1;
          lVar6 = sVar9 + 1;
          sVar9 = __n;
        } while (pcVar8[lVar6] != '\0');
        uVar7 = local_4b8 + __n;
        if (local_4a8 <= uVar7) {
          uVar2 = uVar7 + 1;
          if (uVar7 + 1 <= local_4a8 * 2) {
            uVar2 = local_4a8 * 2;
          }
          if (local_4b0 != 0) {
            uVar2 = local_4b0 + local_4b8 + __n + 1;
          }
          FUN_005c5e00(&local_4c8,uVar2,1);
          uVar7 = local_4b8 + __n;
        }
        memcpy(local_4c0 + local_4b8,pcVar8,__n);
        local_4b8 = local_4b8 + __n;
        local_4c0[uVar7] = '\0';
      }
      FUN_005c80d0(&local_470,&local_4c8);
      if ((local_4a0 & 1) == 0) {
        if ((local_4c0 != (char *)0x0) && (local_4c8 != (long *)0x0)) {
          (**(code **)(*local_4c8 + 0x48))
                    (local_4c8,local_4c0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_4c0 = (char *)0x0;
      }
      pcVar1 = PTR_DAT_02713e78;
      pcVar8 = PTR_DAT_02713e78;
      if (local_468 != (char *)0x0) {
        pcVar8 = local_468;
      }
      uVar7 = FUN_00682e30(pcVar8,1);
      if ((uVar7 & 1) != 0) {
        plVar5 = (long *)FUN_005fedc0(param_1,*(undefined8 *)(param_1 + 8),1);
        puVar4 = PTR_DAT_027144c8;
        if (plVar5 != (long *)0x0) {
          local_4a8 = 0;
          local_4a0 = 0;
          local_4b8 = 0;
          local_4b0 = 0;
          if (local_468 != (char *)0x0) {
            pcVar1 = local_468;
          }
          local_4c8 = (long *)0x0;
          local_4c0 = (char *)0x0;
          lVar6 = FUN_005bc740();
          if (lVar6 == 0) {
            local_4c8 = (long *)FUN_005bc6f0();
            local_490 = *(undefined4 *)puVar4;
            cVar3 = *pcVar1;
          }
          else {
            local_4c8 = (long *)FUN_005bc740();
            local_490 = *(undefined4 *)puVar4;
            cVar3 = *pcVar1;
          }
          if (cVar3 != '\0') {
            lVar6 = 0;
            do {
              local_4b8 = lVar6;
              lVar6 = local_4b8 + 1;
            } while (pcVar1[local_4b8] != '\0');
            local_4a0 = local_4a0 | 1;
            local_4a8 = 0;
            local_4c0 = pcVar1;
          }
          local_48c = 0x20000000200;
          local_498 = 0;
          local_484 = 0x1000;
          local_480 = 0;
          local_478 = 0;
          (**(code **)(*plVar5 + 0x90))(plVar5,&local_4c8);
          (**(code **)(plVar5[1] + 0x10))(plVar5 + 1,*(undefined8 *)PTR_PTR_027144d0);
          (**(code **)(*plVar5 + 0xa8))(plVar5,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
          (**(code **)(*plVar5 + 0xa8))(plVar5,"abcdefghijklmnopqrstuvwxyz");
          (**(code **)(*plVar5 + 0xa8))(plVar5,"0123456789");
          (**(code **)(*plVar5 + 0xa8))(plVar5,"!\"#$%&\'()=-~^\\|{}[]`@*:+?/<>,. \t");
          if ((local_4a0 & 1) == 0) {
            if ((local_4c0 != (char *)0x0) && (local_4c8 != (long *)0x0)) {
              (**(code **)(*local_4c8 + 0x48))
                        (local_4c8,local_4c0,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
            }
            local_4c0 = (char *)0x0;
          }
        }
      }
      if ((((local_448 & 1) == 0) && (local_468 != (char *)0x0)) && (local_470 != (long *)0x0)) {
        (**(code **)(*local_470 + 0x48))
                  (local_470,local_468,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
    }
  }
  return;
}


