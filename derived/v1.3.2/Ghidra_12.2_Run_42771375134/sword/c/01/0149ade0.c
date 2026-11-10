/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149ade0; name: FUN_0149ade0
 */


void FUN_0149ade0(long param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x5cd) == '\0') {
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
    FUN_01487db0(*(undefined8 *)(param_1 + 0x80));
    lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x640);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_01481a10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    uVar2 = FUN_0149b6d0(puVar6[2]);
    if (1 < uVar2) {
      FUN_014851c0(*(undefined8 *)(param_1 + 0x80),1);
    }
    lVar4 = *(long *)(param_1 + 0x80);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x610),**(int **)(lVar4 + 0x5e8) != 3);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),**(int **)(lVar4 + 0x5e8) != 3);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x648),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x640),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x638),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x620),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x628),1);
    lVar4 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar4 + 0x650) == 2) {
      bVar1 = true;
    }
    else if (((*(int *)(lVar4 + 0x650) == 3) && (*(char *)(*(long *)(lVar4 + 0x5e8) + 0x15) != '\0')
             ) && (uVar5 = FUN_014876d0(), (uVar5 & 1) == 0)) {
      bVar1 = **(int **)(lVar4 + 0x5e8) != 1;
    }
    else {
      bVar1 = false;
    }
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x630),bVar1);
    local_28 = 0x2a40fa61db851249;
    lVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x2b0),&local_28);
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    FUN_0149ca10(*(undefined8 *)(param_1 + 0x88),0);
    FUN_0149c770(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_01481a10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    if (*(int *)(puVar6[2] + 0xc) == 2) {
      *(undefined8 *)(param_1 + 0x78) = 0x500000006;
      FUN_010364c0(*(undefined8 *)(param_1 + 0x80),1);
      FUN_0149ca10(*(undefined8 *)(param_1 + 0x88),0);
      return;
    }
  }
  return;
}


