/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aef00; name: FUN_008aef00
 */


void FUN_008aef00(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  switch(*(undefined4 *)(lVar2 + 0x5cc)) {
  case 0:
    goto switchD_008aef38_caseD_0;
  case 1:
  case 2:
    FUN_008c61d0(lVar2,1);
    FUN_008c7d10(*(undefined8 *)(param_1 + 0xa0));
    FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),0);
    local_38 = 0x7e6282327890dd21;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2b0),&local_38);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    uVar6 = 9;
    goto LAB_008af114;
  case 3:
    FUN_008afd50(param_1);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar2 = FUN_00897d00();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar2) {
          puVar7 = puVar7 + -10;
          goto LAB_008aefd8;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_008aefd8:
    FUN_008a6b70(puVar7,0x2992c264034ea158,1,0);
    *(undefined4 *)(param_1 + 0x7c) = 3;
    FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_008c99a0(*(undefined8 *)(param_1 + 0xa0),0);
    break;
  case 4:
    FUN_008c8450();
    break;
  case 5:
    FUN_008afbb0(param_1);
    if (*(int *)(param_1 + 0x80) == 7) {
      iVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa0));
      if (iVar1 < 0x4f2) {
        if (iVar1 == 0x433) {
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar7 != (undefined8 *)0x0)) {
            plVar3 = (long *)(**(code **)*puVar7)(puVar7);
            lVar2 = FUN_00897d00();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar2) {
                puVar7 = puVar7 + -10;
                uVar5 = 0x6cca235402a5;
                goto LAB_008af0e8;
              }
            }
          }
          puVar7 = (undefined8 *)0x0;
          uVar5 = 0x6cca235402a5;
        }
        else {
          if (iVar1 != 0x438) {
            if (iVar1 == 0x439) goto LAB_008af09c;
            goto LAB_008af1dc;
          }
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar7 != (undefined8 *)0x0)) {
            plVar3 = (long *)(**(code **)*puVar7)(puVar7);
            lVar2 = FUN_00897d00();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar2) {
                puVar7 = puVar7 + -10;
                uVar5 = 0x6bca235400f2;
                goto LAB_008af0e8;
              }
            }
          }
          puVar7 = (undefined8 *)0x0;
          uVar5 = 0x6bca235400f2;
        }
LAB_008af0e8:
        FUN_008a6b70(puVar7,uVar5 | 0xcf47000000000000,1,0);
      }
      else {
        if ((iVar1 - 0x631U < 2) || (iVar1 == 0x4f2)) {
LAB_008af09c:
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar7 != (undefined8 *)0x0)) {
            plVar3 = (long *)(**(code **)*puVar7)(puVar7);
            lVar2 = FUN_00897d00();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar2) {
                puVar7 = puVar7 + -10;
                goto LAB_008af0dc;
              }
            }
          }
          puVar7 = (undefined8 *)0x0;
LAB_008af0dc:
          uVar5 = 0x66ca2353f873;
          goto LAB_008af0e8;
        }
LAB_008af1dc:
        lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        FUN_014c9030(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8),0,lVar2);
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0
           )) {
          plVar3 = (long *)(**(code **)*puVar7)(puVar7);
          lVar4 = FUN_00897d00();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar4) {
              puVar7 = puVar7 + -10;
              goto LAB_008af254;
            }
          }
        }
        puVar7 = (undefined8 *)0x0;
LAB_008af254:
        FUN_008a6b70(puVar7,0xcf3669ca23458a59,1,0);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        }
      }
      FUN_008c6ab0(*(undefined8 *)(param_1 + 0xa0),1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
      uVar6 = 4;
    }
    else {
      uVar6 = 2;
    }
LAB_008af114:
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x7c) = 6;
    *(undefined4 *)(param_1 + 0x98) = 0xf;
    FUN_00ffa160(lVar2,0,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x5cc) = 0;
switchD_008aef38_caseD_0:
  return;
}


