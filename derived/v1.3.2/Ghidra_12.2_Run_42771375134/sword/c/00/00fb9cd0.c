/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb9cd0; name: FUN_00fb9cd0
 */


void FUN_00fb9cd0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 *local_58;
  
  uVar5 = FUN_00fbe0b0(param_1,param_1 + 0xf8);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_00fbe1f0(param_1,param_1 + 0x188), puVar1 = PTR_DAT_02710860, (uVar5 & 1) != 0)) {
    local_70 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    local_88 = 0;
    uStack_68 = 0;
    local_60 = 0;
    puVar12 = *(undefined4 **)(param_1 + 0x68);
    if (*(undefined4 **)(param_1 + 0x70) != puVar12) {
      do {
        while (piVar6 = (int *)FUN_01225f00(puVar12), *piVar6 != 2) {
          lVar7 = FUN_00fba2d0(puVar12 + 0xa0);
          if (lVar7 == 0) {
            lVar7 = FUN_01225e70(puVar12);
            FUN_01223ca0(lVar7 + 0x10);
            cVar4 = FUN_01223390();
            if (cVar4 == '\x04') break;
          }
          else if (*(char *)(lVar7 + 0x733) != '\0') break;
          plVar3 = local_70;
          plVar2 = local_80;
          local_58 = puVar12;
          if (local_80 < local_78) {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar3;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            *plVar2 = (long)local_58;
            *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            local_80 = local_80 + 1;
            puVar12 = puVar12 + 0xa4;
            if (*(undefined4 **)(param_1 + 0x70) == puVar12) goto LAB_00fba228;
          }
          else {
            FUN_00fc13b0(&local_88,&local_58);
            puVar12 = puVar12 + 0xa4;
            if (*(undefined4 **)(param_1 + 0x70) == puVar12) goto LAB_00fba228;
          }
        }
        FUN_00fbdff0(param_1,puVar12);
        puVar9 = *(undefined4 **)(param_1 + 0x70);
        puVar14 = puVar12 + 0xa4;
        puVar13 = puVar12;
        if (puVar14 == puVar9) {
          lVar7 = *(long *)(puVar12 + 0xa2);
          goto joined_r0x00fba178;
        }
        do {
          *puVar13 = puVar13[0xa4];
          FUN_00fc1090(puVar13 + 4,puVar13 + 0xa8);
          if (*(char *)(puVar13 + 0x3c) == '\0') {
            if (*(char *)(puVar13 + 0xe0) != '\0') {
              memcpy(puVar13 + 0x40,puVar13 + 0xe4,0xb0);
              *(undefined1 *)(puVar13 + 0x3c) = 1;
            }
            cVar8 = *(char *)(puVar13 + 0x6c);
            cVar4 = *(char *)(puVar13 + 0x110);
joined_r0x00fb9dfc:
            if (cVar8 != '\0') goto LAB_00fb9e00;
LAB_00fb9ebc:
            if (cVar4 != '\0') {
              puVar13[0x7f] = puVar13[0x123];
              *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(puVar13 + 0x113);
              *(undefined8 *)(puVar13 + 0x6d) = *(undefined8 *)(puVar13 + 0x111);
              *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(puVar13 + 0x11b);
              *(undefined8 *)(puVar13 + 0x75) = *(undefined8 *)(puVar13 + 0x119);
              *(undefined8 *)(puVar13 + 0x73) = *(undefined8 *)(puVar13 + 0x117);
              *(undefined8 *)(puVar13 + 0x71) = *(undefined8 *)(puVar13 + 0x115);
              *(undefined8 *)(puVar13 + 0x7d) = *(undefined8 *)(puVar13 + 0x121);
              *(undefined8 *)(puVar13 + 0x7b) = *(undefined8 *)(puVar13 + 0x11f);
              *(undefined8 *)(puVar13 + 0x79) = *(undefined8 *)(puVar13 + 0x11d);
              *(undefined1 *)(puVar13 + 0x6c) = 1;
            }
            cVar4 = *(char *)(puVar13 + 0x80);
            cVar8 = *(char *)(puVar13 + 0x124);
joined_r0x00fb9f64:
            if (cVar4 == '\0') goto LAB_00fb9fa8;
LAB_00fb9f68:
            if (cVar8 == '\0') {
              *(undefined1 *)(puVar13 + 0x80) = 0;
            }
            else {
              *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(puVar13 + 0x126);
              *(undefined8 *)(puVar13 + 0x8a) = *(undefined8 *)(puVar13 + 0x12e);
              *(undefined8 *)(puVar13 + 0x88) = *(undefined8 *)(puVar13 + 300);
              *(undefined8 *)(puVar13 + 0x86) = *(undefined8 *)(puVar13 + 0x12a);
              *(undefined8 *)(puVar13 + 0x84) = *(undefined8 *)(puVar13 + 0x128);
            }
          }
          else {
            if (*(char *)(puVar13 + 0xe0) == '\0') {
              *(undefined1 *)(puVar13 + 0x3c) = 0;
              cVar8 = *(char *)(puVar13 + 0x6c);
              cVar4 = *(char *)(puVar13 + 0x110);
              goto joined_r0x00fb9dfc;
            }
            memcpy(puVar13 + 0x40,puVar13 + 0xe4,0xa1);
            cVar4 = *(char *)(puVar13 + 0x110);
            if (*(char *)(puVar13 + 0x6c) == '\0') goto LAB_00fb9ebc;
LAB_00fb9e00:
            if (cVar4 != '\0') {
              puVar13[0x7f] = puVar13[0x123];
              *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(puVar13 + 0x113);
              *(undefined8 *)(puVar13 + 0x6d) = *(undefined8 *)(puVar13 + 0x111);
              *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(puVar13 + 0x11b);
              *(undefined8 *)(puVar13 + 0x75) = *(undefined8 *)(puVar13 + 0x119);
              *(undefined8 *)(puVar13 + 0x73) = *(undefined8 *)(puVar13 + 0x117);
              *(undefined8 *)(puVar13 + 0x71) = *(undefined8 *)(puVar13 + 0x115);
              *(undefined8 *)(puVar13 + 0x7d) = *(undefined8 *)(puVar13 + 0x121);
              *(undefined8 *)(puVar13 + 0x7b) = *(undefined8 *)(puVar13 + 0x11f);
              *(undefined8 *)(puVar13 + 0x79) = *(undefined8 *)(puVar13 + 0x11d);
              cVar4 = *(char *)(puVar13 + 0x80);
              cVar8 = *(char *)(puVar13 + 0x124);
              goto joined_r0x00fb9f64;
            }
            *(undefined1 *)(puVar13 + 0x6c) = 0;
            cVar8 = *(char *)(puVar13 + 0x124);
            if (*(char *)(puVar13 + 0x80) != '\0') goto LAB_00fb9f68;
LAB_00fb9fa8:
            if (cVar8 != '\0') {
              *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(puVar13 + 0x126);
              *(undefined8 *)(puVar13 + 0x8a) = *(undefined8 *)(puVar13 + 0x12e);
              *(undefined8 *)(puVar13 + 0x88) = *(undefined8 *)(puVar13 + 300);
              *(undefined8 *)(puVar13 + 0x86) = *(undefined8 *)(puVar13 + 0x12a);
              *(undefined8 *)(puVar13 + 0x84) = *(undefined8 *)(puVar13 + 0x128);
              *(undefined1 *)(puVar13 + 0x80) = 1;
            }
          }
          *(undefined8 *)(puVar13 + 0x8c) = *(undefined8 *)(puVar13 + 0x130);
          puVar13[0x94] = puVar13[0x138];
          *(undefined8 *)(puVar13 + 0x92) = *(undefined8 *)(puVar13 + 0x136);
          *(undefined8 *)(puVar13 + 0x90) = *(undefined8 *)(puVar13 + 0x134);
          *(undefined8 *)(puVar13 + 0x8e) = *(undefined8 *)(puVar13 + 0x132);
          *(undefined8 *)(puVar13 + 0x9e) = *(undefined8 *)(puVar13 + 0x142);
          *(undefined8 *)(puVar13 + 0x9c) = *(undefined8 *)(puVar13 + 0x140);
          *(undefined8 *)(puVar13 + 0x9a) = *(undefined8 *)(puVar13 + 0x13e);
          *(undefined8 *)(puVar13 + 0x98) = *(undefined8 *)(puVar13 + 0x13c);
          if (*(long *)(puVar13 + 0xa0) != 0) {
            (**(code **)(*(long *)(*(long *)(puVar13 + 0xa0) + 0x48) + 0x18))();
            *(undefined8 *)(puVar13 + 0xa0) = 0;
          }
          uVar10 = *(undefined8 *)(puVar13 + 0x144);
          *(undefined8 *)(puVar13 + 0x144) = 0;
          *(undefined8 *)(puVar13 + 0xa0) = uVar10;
          if (*(long *)(puVar13 + 0xa2) != 0) {
            (**(code **)(*(long *)(*(long *)(puVar13 + 0xa2) + 0x48) + 0x18))();
            *(undefined8 *)(puVar13 + 0xa2) = 0;
          }
          uVar10 = *(undefined8 *)(puVar13 + 0x146);
          *(undefined8 *)(puVar13 + 0x146) = 0;
          *(undefined8 *)(puVar13 + 0xa2) = uVar10;
          puVar13 = puVar13 + 0xa4;
        } while (puVar9 + -0xa4 != puVar13);
        puVar14 = *(undefined4 **)(param_1 + 0x70);
        if (puVar14 != puVar13) {
          do {
            lVar7 = *(long *)(puVar14 + -2);
joined_r0x00fba178:
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
              *(undefined8 *)(puVar14 + -2) = 0;
            }
            if (*(long *)(puVar14 + -4) != 0) {
              (**(code **)(*(long *)(*(long *)(puVar14 + -4) + 0x48) + 0x18))();
              *(undefined8 *)(puVar14 + -4) = 0;
            }
            if (*(char *)(puVar14 + -0x24) != '\0') {
              *(undefined1 *)(puVar14 + -0x24) = 0;
            }
            if (*(char *)(puVar14 + -0x38) != '\0') {
              *(undefined1 *)(puVar14 + -0x38) = 0;
            }
            if (*(char *)(puVar14 + -0x68) != '\0') {
              *(char *)(puVar14 + -0x68) = '\0';
            }
            if (*(char *)(puVar14 + -0x7d) != '\0') {
              if (*(char *)(puVar14 + -0x7b) != '\0') {
                *(char *)(puVar14 + -0x7b) = '\0';
              }
              *(char *)(puVar14 + -0x7d) = '\0';
            }
            if (*(char *)(puVar14 + -0x8c) != '\0') {
              *(char *)(puVar14 + -0x8c) = '\0';
            }
            if (*(char *)(puVar14 + -0x91) != '\0') {
              *(char *)(puVar14 + -0x91) = '\0';
            }
            if (*(char *)(puVar14 + -0x9a) != '\0') {
              *(char *)(puVar14 + -0x9a) = '\0';
            }
            if (*(char *)(puVar14 + -0x9e) != '\0') {
              *(char *)(puVar14 + -0x9e) = '\0';
            }
            pcVar11 = (char *)(puVar14 + -0xa0);
            puVar14 = puVar14 + -0xa4;
            if (*pcVar11 != '\0') {
              *pcVar11 = '\0';
            }
          } while (puVar13 != puVar14);
        }
        *(undefined4 **)(param_1 + 0x70) = puVar13;
      } while (puVar13 != puVar12);
    }
LAB_00fba228:
    puVar1 = PTR_DAT_027194d8;
    uVar5 = (**(code **)(**(long **)PTR_DAT_027194d8 + 0x68))(*(long **)PTR_DAT_027194d8,1);
    if ((uVar5 & 1) == 0) {
      lVar7 = FUN_00df1bc0(*(undefined8 *)puVar1,&local_58);
      local_58 = (undefined4 *)(lVar7 + 0xb0);
      FUN_00fc1570(local_88,local_80,&local_58);
      FUN_00fbe330(param_1,&local_88);
      FUN_00fbe670(param_1,&local_88);
    }
    if (local_88 != 0) {
      local_80 = (long *)local_88;
      (**(code **)(*local_70 + 0x18))(local_70,local_88,(long)local_78 - local_88,8);
    }
  }
  return;
}


