/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139f840; name: FUN_0139f840
 */


void FUN_0139f840(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long alStack_a0 [13];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar8 + -10;
          goto LAB_0139f8b8;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0139f8b8:
  lVar5 = FUN_01380080(puVar4,auStack_38);
  *(undefined4 *)(lVar5 + 0x7c) = param_1;
  puVar8 = (undefined8 *)FUN_012dcaa0(param_2);
  *(undefined4 *)(lVar5 + 0x204) = 0x16;
  *(undefined8 *)(lVar5 + 0x218) = puVar8[1];
  *(undefined8 *)(lVar5 + 0x210) = *puVar8;
  uVar6 = *param_3;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar5 + 0x230) = 0x3f4ccccd00000000;
  *(undefined1 *)(lVar5 + 0x200) = 1;
  *(undefined8 *)(lVar5 + 0x220) = uVar6;
  *(undefined8 *)(lVar5 + 0x228) = uVar1;
  pcVar7 = *(code **)(lVar5 + 0x2c8);
  alStack_a0[0] = param_2;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
    *(undefined8 *)(lVar5 + 0x2d8) = 0;
    *(undefined8 *)(lVar5 + 0x2c0) = 0;
    *(undefined8 *)(lVar5 + 0x2c8) = 0;
    (*pcVar7)(lVar5 + 0x2e0);
  }
  FUN_013a0700(alStack_a0,lVar5 + 0x2e0);
  *(undefined1 **)(lVar5 + 0x2d8) = &LAB_013a0710;
  *(code **)(lVar5 + 0x2c8) = FUN_013a06f0;
  *(code **)(lVar5 + 0x2d0) = FUN_013a0700;
  *(undefined8 *)(lVar5 + 0x2c0) = &LAB_013a06b0;
  FUN_013a06f0(alStack_a0);
  return;
}


