/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d15240; name: FUN_00d15240
 */


void FUN_00d15240(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  lVar2 = *(long *)(param_1 + 0x2b8);
  if ((*(char *)(lVar2 + 0x78c) == '\0') &&
     (uVar3 = FUN_00d67230(lVar2,*(undefined4 *)(lVar2 + 0x788)), (uVar3 & 1) != 0)) {
    FUN_00da89d0(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x780));
  }
  FUN_0102bd20(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
  lVar2 = *(long *)(param_1 + 0x2b8);
  if (*(char *)(lVar2 + 2000) != '\0') {
    *(undefined4 *)(param_1 + 800) = 1;
  }
  if (*(char *)(lVar2 + 0x7d1) != '\0') {
    *(undefined4 *)(param_1 + 800) = 3;
  }
  if (*(char *)(lVar2 + 0x7d2) != '\0') {
    *(undefined4 *)(param_1 + 800) = 4;
  }
  if (*(char *)(lVar2 + 0x7d3) != '\0') {
    *(undefined4 *)(param_1 + 800) = 5;
  }
  FUN_00d679f0();
  plVar6 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x120);
  do {
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x2c0) = 4;
      return;
    }
    lVar7 = plVar6[3];
    lVar2 = *(long *)(lVar7 + 0x108);
    if (lVar2 != 0) {
      plVar4 = *(long **)(lVar7 + 0x100);
      plVar8 = plVar4;
      do {
        while (lVar5 = *plVar8, lVar5 == 0) {
          if (DAT_000000b6 == '\0') {
LAB_00d1536c:
            lVar2 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
            if (lVar2 == 0) {
              return;
            }
            uVar3 = FUN_01020290(lVar2,0x1000000000000);
            if (((uVar3 & 1) != 0) &&
               (uVar3 = FUN_00d67c40(*(undefined8 *)(param_1 + 0x2b8),0xb75a66b8e67a09c0),
               (uVar3 & 1) != 0)) {
              FUN_00d67bc0(*(undefined8 *)(param_1 + 0x2b8),0xb75a66b8e67a09c0);
            }
            uVar3 = FUN_01020290(lVar2,0x2000000000000);
            if ((uVar3 & 1) == 0) {
              return;
            }
            uVar3 = FUN_00d67c40(*(undefined8 *)(param_1 + 0x2b8),0x9e82687adeee94da);
            if ((uVar3 & 1) == 0) {
              return;
            }
            FUN_00d67bc0(*(undefined8 *)(param_1 + 0x2b8),0x9e82687adeee94da);
            return;
          }
          plVar8 = plVar8 + 1;
          if (plVar8 == plVar4 + lVar2) goto LAB_00d15358;
        }
        plVar4 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        cVar1 = *(char *)(lVar5 + 0xb6);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        if (cVar1 == '\0') goto LAB_00d1536c;
        plVar4 = *(long **)(lVar7 + 0x100);
        lVar2 = *(long *)(lVar7 + 0x108);
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar4 + lVar2);
    }
LAB_00d15358:
    plVar6 = (long *)*plVar6;
  } while( true );
}


