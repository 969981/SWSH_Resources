/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934df0; name: FUN_00934df0
 */


void FUN_00934df0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_008ef450(iVar3);
    if ((uVar1 & 1) == 0) {
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935004;
LAB_00934e30:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e44;
LAB_0093501c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x48));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935034;
LAB_00934e58:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e6c;
LAB_0093504c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x88));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935064;
LAB_00934e80:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e94;
LAB_0093507c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 200));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935094;
LAB_00934ea8:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934ebc;
LAB_009350ac:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x108));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009350c4;
LAB_00934ed0:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934ee4;
LAB_009350dc:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x148));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009350f4;
LAB_00934ef8:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f0c;
LAB_0093510c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x188));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935124;
LAB_00934f20:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f34;
LAB_0093513c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x1c8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935154;
LAB_00934f48:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f5c;
LAB_0093516c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x208));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935184;
LAB_00934f70:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f84;
LAB_0093519c:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x248));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009351b4;
LAB_00934f98:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934fac;
LAB_009351cc:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x288));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009351e4;
LAB_00934fc0:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934fd4;
LAB_009351fc:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x2c8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_00935214;
LAB_00934fe8:
      uVar2 = 0;
    }
    else {
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e30;
LAB_00935004:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x28));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093501c;
LAB_00934e44:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e58;
LAB_00935034:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x68));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093504c;
LAB_00934e6c:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934e80;
LAB_00935064:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0xa8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093507c;
LAB_00934e94:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934ea8;
LAB_00935094:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0xe8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009350ac;
LAB_00934ebc:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934ed0;
LAB_009350c4:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x128));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009350dc;
LAB_00934ee4:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934ef8;
LAB_009350f4:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x168));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093510c;
LAB_00934f0c:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f20;
LAB_00935124:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x1a8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093513c;
LAB_00934f34:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f48;
LAB_00935154:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x1e8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093516c;
LAB_00934f5c:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f70;
LAB_00935184:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x228));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_0093519c;
LAB_00934f84:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934f98;
LAB_009351b4:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x268));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009351cc;
LAB_00934fac:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934fc0;
LAB_009351e4:
      FUN_00935520(*(undefined8 *)(param_1 + lVar4 + 0x2a8));
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) != 0) goto LAB_009351fc;
LAB_00934fd4:
      FUN_00935520(0);
      uVar1 = FUN_008ef450(iVar3);
      if ((uVar1 & 1) == 0) goto LAB_00934fe8;
LAB_00935214:
      uVar2 = *(undefined8 *)(param_1 + lVar4 + 0x2e8);
    }
    FUN_00935520(uVar2);
    lVar4 = lVar4 + 0x300;
    iVar3 = iVar3 + 1;
    if (lVar4 == 0x600) {
      return;
    }
  } while( true );
}


