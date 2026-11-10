/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608a90; name: FUN_00608a90
 */


/* WARNING: Removing unreachable block (ram,0x00608d74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00608a90(long param_1,undefined8 *param_2,char param_3,undefined4 param_4,int param_5,
                long param_6,undefined8 *param_7)

{
  long lVar1;
  int iVar2;
  void *__s;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  size_t __n;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  __n = *(size_t *)(lVar1 + 0x48);
  if ((long)__n < 1) {
    if (__n == 0) {
      _DAT_000000c0 = *param_2;
      if (param_3 != '\0') {
        _DAT_00000010 = _DAT_00000010 | 0x400;
      }
      _DAT_000000b0 = param_1;
      _DAT_000000b8 = lVar7;
      puVar8 = (undefined8 *)(**(code **)(lVar7 + 8))(lVar7,0x80);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        _DAT_000000f0 = puVar8;
        puVar8[0xd] = 0;
        if (0 < param_5) {
          lVar4 = 0;
          puVar5 = (undefined8 *)(param_6 + 8);
          do {
            if (_DAT_000000f0[0xd] != 0) break;
            if (puVar5[-1] == 0x696e6372) {
              _DAT_000000f0[0xd] = *puVar5;
            }
            lVar4 = lVar4 + 1;
            puVar5 = puVar5 + 2;
          } while (lVar4 < param_5);
        }
        *(undefined4 *)((long)_DAT_000000f0 + 0x74) = 0xffffffff;
        if (*(code **)(lVar1 + 0x60) == (code *)0x0) {
          *param_2 = _DAT_000000c0;
        }
        else {
          iVar2 = (**(code **)(lVar1 + 0x60))(*param_2,0,param_4,param_5,param_6);
          *param_2 = _DAT_000000c0;
          if (iVar2 != 0) {
            if (0 < _DAT_00000048) {
              lVar4 = 0;
              do {
                plVar9 = (long *)_DAT_00000050[lVar4];
                lVar10 = *(long *)(*plVar9 + 0xb8);
                if (*(code **)(plVar9[2] + 0x10) != (code *)0x0) {
                  (**(code **)(plVar9[2] + 0x10))(plVar9);
                }
                (**(code **)(lVar10 + 0x10))(lVar10,plVar9);
                _DAT_00000050[lVar4] = 0;
                lVar4 = lVar4 + 1;
              } while (lVar4 < _DAT_00000048);
            }
            if (_DAT_00000050 != (long *)0x0) {
              (**(code **)(lVar7 + 0x10))(lVar7);
            }
            _DAT_00000050 = (long *)0x0;
            _DAT_00000048 = 0;
            pcVar3 = *(code **)(lVar1 + 0x68);
            goto joined_r0x00608ddc;
          }
        }
        if (_DAT_00000050 == (long *)0x0) {
          *param_7 = 0;
          return 0;
        }
        plVar9 = _DAT_00000050 + (long)_DAT_00000048 + -1;
        if (_DAT_00000050 <= plVar9) {
          plVar6 = plVar9;
          do {
            lVar7 = *plVar6;
            if (*(int *)(lVar7 + 8) == 0x756e6963) {
              if (*(short *)(lVar7 + 0xc) == 0) {
                if (*(short *)(lVar7 + 0xe) == 4) goto LAB_00608c9c;
              }
              else if ((*(short *)(lVar7 + 0xc) == 3) && (*(short *)(lVar7 + 0xe) == 10)) {
LAB_00608c9c:
                _DAT_000000a8 = lVar7;
                goto LAB_00608cc0;
              }
            }
            plVar6 = plVar6 + -1;
          } while (_DAT_00000050 <= plVar6);
        }
        do {
          if (plVar9 < _DAT_00000050) goto LAB_00608cc0;
          lVar7 = *plVar9;
          plVar9 = plVar9 + -1;
        } while (*(int *)(lVar7 + 8) != 0x756e6963);
        _DAT_000000a8 = lVar7;
LAB_00608cc0:
        *param_7 = 0;
        return 0;
      }
      iVar2 = 0x40;
      pcVar3 = *(code **)(lVar1 + 0x68);
    }
    else {
      iVar2 = 6;
      pcVar3 = *(code **)(lVar1 + 0x68);
    }
    puVar8 = (undefined8 *)0x0;
  }
  else {
    __s = (void *)(**(code **)(lVar7 + 8))(lVar7,__n);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,__n);
    }
    puVar8 = (undefined8 *)0x0;
    iVar2 = 0x40;
    pcVar3 = *(code **)(lVar1 + 0x68);
  }
joined_r0x00608ddc:
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(0);
  }
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)(lVar7 + 0x10))(lVar7,puVar8);
  }
  *param_7 = 0;
  return iVar2;
}


