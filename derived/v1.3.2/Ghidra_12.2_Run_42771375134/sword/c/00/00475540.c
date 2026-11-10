/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475540; name: FUN_00475540
 */


void FUN_00475540(int *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = *(undefined8 **)(param_1 + 4);
  if (puVar9 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    do {
      while( true ) {
        puVar8 = puVar9;
        uVar6 = FUN_00474080(puVar8);
        puVar9 = (undefined8 *)puVar8[1];
        if ((uVar6 & 1) == 0) break;
        plVar1 = (long *)(param_1 + 4);
        if (*(undefined8 **)(param_1 + 4) != puVar8) {
          plVar1 = puVar10 + 1;
        }
        *plVar1 = (long)puVar9;
        if (*(undefined8 **)(param_1 + 2) == puVar8) {
          *(undefined8 **)(param_1 + 2) = puVar10;
        }
        *param_1 = *param_1 + -1;
        puVar8[1] = puVar7;
        puVar7 = puVar8;
        puVar4 = PTR_DAT_02712a90;
        if (puVar9 == (undefined8 *)0x0) goto joined_r0x004755cc;
      }
      puVar10 = puVar8;
      puVar8 = puVar7;
      puVar4 = PTR_DAT_02712a90;
    } while (puVar9 != (undefined8 *)0x0);
joined_r0x004755cc:
    while (puVar5 = PTR_DAT_02712a90, PTR_DAT_02712a90 = puVar4, puVar8 != (undefined8 *)0x0) {
      while( true ) {
        puVar9 = (undefined8 *)puVar8[1];
        FUN_00473aa0(puVar8);
        iVar3 = *(int *)((long)puVar8 + 100) + -1;
        *(int *)((long)puVar8 + 100) = iVar3;
        if (iVar3 == 0) break;
        puVar8 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
      }
      uVar2 = *(undefined4 *)puVar5;
      (**(code **)*puVar8)(puVar8);
      FUN_00404870(uVar2,puVar8);
      puVar8 = puVar9;
      puVar4 = PTR_DAT_02712a90;
      PTR_DAT_02712a90 = puVar5;
    }
  }
  return;
}


