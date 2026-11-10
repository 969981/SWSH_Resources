/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014cda80; name: FUN_014cda80
 */


void FUN_014cda80(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(*(long *)(param_1 + 0x60) + 0x60);
  if (uVar7 < 5 && (1 << (ulong)(uVar7 & 0x1f) & 0x19U) != 0) {
    iVar3 = FUN_014cdd90(param_1,param_2,0,&DAT_02171f4c,3);
    uVar7 = *(uint *)(*(long *)(param_1 + 0x60) + 0x60);
  }
  else {
    iVar3 = 0;
  }
  if (uVar7 < 5 && (1 << (ulong)(uVar7 & 0x1f) & 0x1aU) != 0) {
    iVar3 = FUN_014cdd90(param_1,param_2,iVar3,&DAT_02171f4f,3);
    uVar7 = *(uint *)(*(long *)(param_1 + 0x60) + 0x60);
  }
  if (uVar7 == 4 || uVar7 == 2) {
    iVar3 = FUN_014cdd90(param_1,param_2,iVar3,&DAT_02171f52,3);
  }
  iVar8 = 0;
  uVar7 = 0;
  do {
    FUN_0154e6d0(uVar7,param_1 + 0x9d8);
    if (*(int *)(param_1 + 0x9dc) != 0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
      if (lVar6 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_009fe380(lVar6,param_2);
      *(long **)(lVar6 + 8) = param_2;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 400;
      *(undefined8 *)(lVar6 + 0x20) = 0x10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      FUN_009fe790(lVar6,param_1 + 0x9e0);
      if (*(int *)(*(long *)(param_1 + 0x60) + 0x60) == 4) {
LAB_014cdc78:
        lVar5 = param_1 + (long)iVar3 * 0x18;
        plVar1 = (long *)(lVar5 + 0x80);
        *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(param_1 + 0x9dc);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar5 = *plVar1;
        *plVar1 = lVar6;
        if (lVar5 == 0) {
          lVar5 = lVar6;
        }
        else {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          lVar5 = *plVar1;
        }
        *(undefined1 *)(param_1 + (long)iVar3 * 0x18 + 0x8c) = 10;
        iVar3 = iVar3 + 1;
        uVar4 = FUN_009fe1a0(lVar5);
        lVar5 = param_1 + (long)iVar8 * 4;
        *(uint *)(lVar5 + 0x2ce0) = *(uint *)(lVar5 + 0x2ce0) & 0xffff8000 | uVar4 & 0x7fff;
        uVar4 = FUN_009ff180(*plVar1);
        iVar8 = iVar8 + 1;
        *(uint *)(lVar5 + 0x2ce0) = *(uint *)(lVar5 + 0x2ce0) & 0x7fff | (uVar4 & 0xff) << 0xf;
      }
      else {
        cVar2 = FUN_009ff0e0(lVar6);
        if (cVar2 == '\x02') {
          if (*(int *)(*(long *)(param_1 + 0x60) + 0x60) == 2) goto LAB_014cdc78;
        }
        else {
          if (cVar2 == '\x01') {
            uVar4 = *(uint *)(*(long *)(param_1 + 0x60) + 0x60) | 2;
          }
          else if ((cVar2 != '\0') ||
                  (uVar4 = *(uint *)(*(long *)(param_1 + 0x60) + 0x60), uVar4 == 0))
          goto LAB_014cdc78;
          if (uVar4 == 3) goto LAB_014cdc78;
        }
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
    }
    uVar7 = uVar7 + 1;
    if (0x1d < uVar7) {
      return;
    }
  } while( true );
}


