/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066aa10; name: FUN_0066aa10
 */


undefined8 FUN_0066aa10(long param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 != (long *)0x0) {
    FUN_00682fc0(param_2,0x10);
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    *param_3 = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    (**(code **)(*param_2 + 0xa8))(param_2,param_3,0x20,1);
    lVar4 = FUN_005c56e0(param_3,"SiGfxShaderEffectPackage",1);
    if (lVar4 == 0) {
      cVar1 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(char *)(param_3 + 4) = cVar1;
      if ((byte)(cVar1 - 1U) < 2) {
        (**(code **)(*param_2 + 0x68))(param_2,cVar1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(param_3 + 6) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)((long)param_3 + 0x34) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)(param_3 + 7) = uVar2;
        uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *(undefined4 *)((long)param_3 + 0x3c) = uVar2;
        iVar3 = FUN_005cbcf0(*(undefined4 *)(param_3 + 6),*(undefined4 *)((long)param_3 + 0x34),
                             *(undefined4 *)(param_3 + 7),uVar2,3,0,0,5);
        if (iVar3 == 0) {
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 8) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x44) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 9) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x4c) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 10) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x54) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0xb) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x5c) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0xc) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 100) = uVar2;
          uVar5 = (**(code **)(*param_2 + 0xe0))(param_2,1);
          param_3[0xd] = uVar5;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0xe) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0xf) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x7c) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0x10) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x84) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0x11) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x8c) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)(param_3 + 0x12) = uVar2;
          uVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
          *(undefined4 *)((long)param_3 + 0x94) = uVar2;
          *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((long)param_3 + 0x44);
          *(undefined8 *)(param_1 + 0x80) = param_3[9];
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_3 + 10);
          *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)param_3 + 0x54);
          *(undefined8 *)(param_1 + 0x90) = param_3[0xb];
          *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_3 + 0xc);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


